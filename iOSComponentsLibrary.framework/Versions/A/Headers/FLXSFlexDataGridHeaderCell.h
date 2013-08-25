#import "FLXSFlexDataGridCell.h"
#import "UIView+UIViewAdditions.h"

@class FLXSFlexDataGridColumnLevel;

@interface FLXSFlexDataGridHeaderCell : FLXSFlexDataGridCell
{

}

@property (nonatomic, assign) BOOL resizing;
@property (nonatomic, assign) BOOL resizingPrevious;
@property (nonatomic, assign) BOOL sortAscending;
@property (nonatomic, assign) BOOL sortable;
@property (nonatomic, strong) UIView* icon;
@property (nonatomic, strong) UIView* sortLabel;
@property (nonatomic, assign) float iconOffset;



-(void)destroySortIcon;
-(void)column:(FLXSFlexDataGridColumn*)value;
-(void)createSortIcon:(UIView*)container;

- (void)setRendererSize:(UIView *)cellRenderer width:(float)w height:(float)h;
-(void)destroy;
-(BOOL)isSorted;
-(void)refreshCell;
-(void)placeSortIcon;
-(void)drawSortSeparator;
-(id)getBackgroundColors;
-(id)getTextColors;
-(void)initializeCheckBoxRenderer:(UIView*)renderer;
-(void)onCheckChange:(NSNotification*)event;

- (void)selectLevel:(FLXSFlexDataGridColumnLevel *)checkLevel items:(NSArray *)items checked:(BOOL)checked;
-(id)getRolloverColor;
-(NSString*)prefix;
-(BOOL)drawTopBorder;

@end

