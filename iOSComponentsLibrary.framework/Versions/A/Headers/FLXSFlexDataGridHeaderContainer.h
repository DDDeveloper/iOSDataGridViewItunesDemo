#import "FLXSVersion.h"
#import "FLXSFlexDataGridContainerBase.h"
@class FLXSFlexDataGrid;
@class FLXSEvent;
@class FLXSFlexDataGridColumnLevel;
@class FLXSFilterPageSortChangeEvent;
@class FLXSComponentInfo;
@class FLXSComponentAdditionResult;
@protocol FLXSIExtendedPager;
@class FLXSRowInfo;

@interface FLXSFlexDataGridHeaderContainer : FLXSFlexDataGridContainerBase
{
}

@property (nonatomic, assign) int chromeType;
-(void)onWidthChanged:(FLXSEvent*)event;

-(id)initWithGrid:(FLXSFlexDataGrid*)grid;

- (void)createComponents:(FLXSFlexDataGridColumnLevel *)level currentScroll:(int)currentScroll flat:(NSObject *)flat;
-(void)rootPageChange:(NSNotification*)event;
-(void)onFilterChange:(NSNotification*)event;
-(NSArray*)getRowsForRecycling;
-(float)maxHorizontalScrollPosition;
-(FLXSComponentInfo*)getPagerCell;
-(UIView<FLXSIExtendedPager>*)getPager;

- (FLXSComponentAdditionResult *)addCell:(UIView *)component row:(FLXSRowInfo *)row existingComponent:(FLXSComponentInfo *)existingComponent;

- (void)setFilterValue:(NSString *)col val:(NSObject *)val;
-(NSMutableArray*)getFilterArguments;
-(BOOL)setFilterFocus:(NSString*)fld;



@end

