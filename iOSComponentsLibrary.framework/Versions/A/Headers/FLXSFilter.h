#import "FLXSVersion.h"
#import "FLXSUIUtils.h"
@class FLXSFilterExpression;
@interface FLXSFilter : NSObject
{

}
@property(nonatomic,assign) id delegateForSortCompareFunctions;                       // default nil. weak reference

@property (nonatomic, assign) int pageSize;
@property (nonatomic, assign) int pageIndex;
@property (nonatomic, assign) int pageCount;
@property (nonatomic, assign) int recordCount;
@property (nonatomic, strong) NSMutableArray* arguments;
@property (nonatomic, strong) NSMutableArray* sorts;
@property (nonatomic, strong) NSString* filterDescription;
@property (nonatomic, strong) NSObject* records;


-(void)copyFrom:(NSObject*)filter;

- (void)addSort:(NSString *)sortColumn isAscending:(BOOL)isAscending sortComparisonType:(NSString *)sortComparisonType sortCompareFunction:(NSComparator)sortCompareFunction;

- (void)addCriteria:(NSString *)columnName expression:(NSObject *)expression;

- (void)addOperatorCriteria:(NSString *)columnName operation:(NSString *)operation compareValue:(NSObject *)compareValue wasContains:(BOOL)wasContains;
-(void)addFilterExpression:(FLXSFilterExpression *)filterExpression;
-(void)removeCriteria:(NSString*)searchField;
-(id)getFilterValue:(NSString*)fld;
-(id)getFilterExpression:(NSString*)fld;

+ (NSString*)ALL_ITEM;
+(void)setALL_ITEM:(NSString *)val;

@end

