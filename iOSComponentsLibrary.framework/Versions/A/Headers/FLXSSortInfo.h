#import "FLXSVersion.h"
@class FLXSFlexDataGridColumn;

@interface FLXSSortInfo : NSObject
{

}

@property (nonatomic, strong) FLXSFlexDataGridColumn* sortCol;
@property (nonatomic, assign) BOOL sortAscending;

- (id)initWithSortColumn:(FLXSFlexDataGridColumn *)sortCol andSortAscending:(BOOL)sortAscending;

@end

