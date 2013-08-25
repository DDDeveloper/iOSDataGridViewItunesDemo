#import "FLXSVersion.h"

@interface FLXSFilterSort : NSObject

@property (nonatomic, strong) NSObject* column;
@property (nonatomic, strong) NSString* sortColumn;
@property (nonatomic, strong) NSString* sortCompareFunction;
@property (nonatomic, assign) BOOL isAscending;
@property (nonatomic, strong) NSString* sortComparisonType;
@property (nonatomic, assign) BOOL sortCaseInsensitive;
@property (nonatomic, assign) BOOL sortNumeric;

- (id)initWithSortColumn:(NSString *)sortColumn andIsAscending:(BOOL)isAscending;
-(void)copyFrom:(NSObject*)filterSort;

@end

