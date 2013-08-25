//
//  ViewController.m
//  iOSDataGridViewItunesDemo
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController {
    UISearchBar *mySearchBar;
    FLXSFlexDataGrid *flxsDataGrid;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setUpUI];
    [self setUpGrid];
    [self setUpInitialData];
    [self.view addSubview:flxsDataGrid];
    [self.view addSubview:mySearchBar];
}

- (void)setUpInitialData {
    NSURL *url = [NSURL URLWithString:@"https://itunes.apple.com/search?term=metallica"];
    NSData *jsonFileData = [NSData dataWithContentsOfURL:url];
    NSError *error = nil;
    id object = [NSJSONSerialization JSONObjectWithData:jsonFileData options:0 error:&error];
    if ([object isKindOfClass:[NSDictionary class]]) {
        NSDictionary *results = object;
        flxsDataGrid.dataProvider = [results valueForKey:@"results"];
    }
}

- (void)setUpGrid {
    flxsDataGrid.delegate = self;
    [[FLXSStyleManager instance] applyRedBlackStyle:flxsDataGrid];
    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"gridview" ofType:@"xml"];
    NSData *fileData = [NSData dataWithContentsOfFile:filePath];
    [flxsDataGrid buildFromXML:fileData];
}

- (void)setUpUI {
    mySearchBar = [[UISearchBar alloc] initWithFrame:CGRectMake(10, 10, 950, 90)];
    mySearchBar.delegate = self;
    flxsDataGrid = [[FLXSFlexDataGrid alloc] initWithFrame:CGRectMake(10, 100, 950, 500)];
    mySearchBar.placeholder = @"Search for artist";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)searchBarCancelButtonClicked:(UISearchBar *) searchBar {
    NSLog(@"User canceled search");
    [searchBar resignFirstResponder]; // if you want the keyboard to go away
}

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
    NSString *serviceURL =  @"https://itunes.apple.com/search?term=";
    NSString *params = [searchBar.text stringByReplacingOccurrencesOfString:@" "
                                                      withString:@"+"];
    NSURL *url = [NSURL URLWithString:[serviceURL stringByAppendingString:params]];
    NSLog(url.absoluteString);
    NSData *jsonFileData = [NSData dataWithContentsOfURL:url];
    NSError *error = nil;
    id object = [NSJSONSerialization JSONObjectWithData:jsonFileData options:0 error:&error];
    if ([object isKindOfClass:[NSDictionary class]]) {
        NSDictionary *results = object;
        flxsDataGrid.dataProvider = [results valueForKey:@"results"];
    }
    [searchBar resignFirstResponder]; // if you want the keyboard to go away
}

@end
