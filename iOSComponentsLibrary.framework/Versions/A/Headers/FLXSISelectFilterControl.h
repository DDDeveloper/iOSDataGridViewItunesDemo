#import "FLXSIFilterControl.h"
#import "FLXSVersion.h"

@protocol FLXSISelectFilterControl <FLXSIFilterControl>
@property (nonatomic,strong) NSArray * dataProvider;
@property (nonatomic,strong) NSString * dataField;
@property (nonatomic,strong) NSString * labelField;
@property (nonatomic,strong) NSString * addAllItemText;
@property (nonatomic, assign) BOOL addAllItem;
@property (nonatomic,assign) float dropDownWidth;
-(void)addAllItem:(BOOL)val;
@end

