#import "FLXSVersion.h"
#import "FLXSUIUtils.h"
#import "FLXSFlexDataGridItemEditEvent.h"
#import "FLXSFlexDataGridCheckBoxColumn.h"
#import "FLXSFlexDataGridFooterCell.h"
#import "FLXSFlexDataGridFilterCell.h"
#import "FLXSFlexDataGridPagerCell.h"
#import "FLXSFlexDataGridLevelRendererCell.h"
#import "FLXSFlexDataGridExpandCollapseCell.h"
#import "FLXSFlexDataGridColumnGroupCell.h"
#import "FLXSFlexDataGridExpandCollapseHeaderCell.h"
#import "FLXSISelectFilterControl.h"

@class FLXSEvent;
@class FLXSFlexDataGrid;
@protocol FLXSIFlexDataGridCell;
@class FLXSRowPositionInfo;
@class FLXSFlexDataGridColumnLevel;
@class FLXSComponentInfo;
@class FLXSRowInfo;
@class FLXSFlexDataGridFooterCell;
@class FLXSFlexDataGridColumn;
@class FLXSItemLoadInfo;
@class FLXSComponentAdditionResult;
@class FLXSFilterPageSortChangeEvent;
@class FLXSClassFactory;
@class FLXSAdvancedFilter;
@class FLXSFlexDataGridColumnGroupCell;
@protocol FLXSIFlexDataGridDataCell;
@class FLXSFlexDataGrid;
@class FLXSFlexDataGridHeaderCell;
@class FLXSFlexDataGridCell;
@class FLXSFlexDataGridHeaderSeparator;
@class FLXSFlexDataGridPaddingCell;
@protocol FLXSIFilterControl;
@class FLXSFlexDataGridColumnGroup;
@class FLXSUIUtils;
@class FLXSFlexDataGridCheckBoxColumn;
@class FLXSKeyValuePairCollection;

@interface FLXSFlexDataGridContainerBase : UIScrollView <UIScrollViewDelegate>
{

}

@property (nonatomic, weak) FLXSFlexDataGrid* grid;
@property (nonatomic, assign) BOOL verticalSpill;
@property (nonatomic, strong) NSMutableArray* rows;
@property (nonatomic, strong) FLXSKeyValuePairCollection* sortInfo;
@property (nonatomic, strong) NSMutableArray* loadedItems;
@property (nonatomic, strong) NSMutableArray* itemVerticalPositions;
@property (nonatomic, assign) float verticalMask;
@property (nonatomic, assign) float horizontalMask;
@property (nonatomic, assign) float horizontalScrollPending;
@property (nonatomic, assign) BOOL enableHorizontalRecycling;
@property (nonatomic, assign) BOOL columnDraggingToRight;
@property (nonatomic, assign) BOOL keyboardhandled;
@property (nonatomic, strong) UIView<FLXSIFlexDataGridCell>* lastMouseOutCell;
@property (nonatomic, assign) int lastSelectedRowIndex;
@property (nonatomic, strong) NSTimer* itemClickTimer;
@property (nonatomic, assign) float itemClickTimerDuration;
@property (nonatomic, assign) BOOL inEdit;
@property (nonatomic, assign) BOOL prevDefaultButtonEnabled;
@property (nonatomic, assign) BOOL validationFailed;
@property (nonatomic, assign) int resizeCursorID;
@property (nonatomic, strong) FLXSFlexDataGridHeaderCell* columnResizingCell;
@property (nonatomic, strong) FLXSFlexDataGridCell* columnDraggingDragCell;
@property (nonatomic, strong) UIView<FLXSIFlexDataGridCell>* columnDraggingDropTargetCell;
@property (nonatomic, strong) FLXSFlexDataGridHeaderSeparator* columnResizingGlyph;
@property (nonatomic, strong) UIView* columnDraggingGlyph;
@property (nonatomic, assign) float startX;
@property (nonatomic, strong) NSMutableArray* cellsWithColSpanOrRowSpan;
@property (nonatomic, assign) float lastContentOffsetX;
@property (nonatomic, assign) float lastContentOffsetY;
@property (nonatomic, strong) NSString* horizontalScrollPolicy;
@property (nonatomic, strong) NSString* verticalScrollPolicy;


typedef enum ScrollDirection {
    ScrollDirectionNone,
    ScrollDirectionRight,
    ScrollDirectionLeft,
    ScrollDirectionUp,
    ScrollDirectionDown
} ScrollDirection;


-(id)initWithGrid:(FLXSFlexDataGrid*)grid;
-(void)createChildren;
-(UIView<FLXSIFlexDataGridCell>*)getCellFromMouseEventTarget:(NSObject*)target;
-(void)removeAllComponents:(BOOL)recycle;

- (void)createComponents:(FLXSFlexDataGridColumnLevel *)level currentScroll:(int)currentScroll flat:(NSObject *)flat;

- (BOOL)isInVisibleHorizontalRange:(float)x width:(float)width;
-(void)removeComponent:(FLXSComponentInfo*)comp;
-(void)reDraw;

- (void)recycleH:(FLXSFlexDataGridColumnLevel *)level scrollRight:(BOOL)scrollRight;
-(NSArray*)getRowsForRecycling;

- (void)processRowPositionInfo:(FLXSRowPositionInfo *)rowPositionInfo scrollDown:(BOOL)scrollDown existingRow:(FLXSRowInfo *)existingRow existingComponents:(NSArray *)existingComponents;
-(void)removeComponents:(FLXSRowInfo*)row;
-(void)setCurrentCellToFirst;

- (UIView <FLXSIFlexDataGridCell> *)getFirstAvailableCell:(UIView <FLXSIFlexDataGridCell> *)cell up:(BOOL)up;

- (UIView <FLXSIFlexDataGridCell> *)getFirstHoverableCell:(FLXSRowInfo *)row dataOnly:(BOOL)dataOnly editableOnly:(BOOL)editableOnly;
-(BOOL)isHoverableCell:(UIView<FLXSIFlexDataGridCell>*)cell;
-(FLXSComponentInfo*)addEventListeners:(FLXSComponentInfo*)comp;

- (void)handleMouseOver:(UIView <FLXSIFlexDataGridCell> *)cell triggerEvent:(FLXSEvent *)triggerEvent;
-(void)onCellMouseOut:(FLXSEvent*)event;

- (void)handleMouseOut:(UIView <FLXSIFlexDataGridCell> *)cell triggerEvent:(FLXSEvent *)triggerEvent;
-(void)onCellDoubleClick:(FLXSEvent*)event;

- (void)handleDoubleClick:(UIView <FLXSIFlexDataGridCell> *)cell triggerEvent:(FLXSEvent *)triggerEvent;
-(void)emulateClick:(UIView<FLXSIFlexDataGridCell>*)cell;

- (void)handleMouseClick:(UIView <FLXSIFlexDataGridCell> *)cell triggerEvent:(FLXSEvent *)triggerEvent checkTimer:(BOOL)checkTimer;

- (BOOL)handleArrowKey:(UIView <FLXSIFlexDataGridCell> *)cell keyCode:(int)keyCode triggerEvent:(FLXSEvent *)triggerEvent;

- (void)handleCellKeyUp:(UIView <FLXSIFlexDataGridCell> *)cell keyCode:(int)keyCode triggerEvent:(FLXSEvent *)triggerEvent;

- (void)handleSpaceBar:(UIView <FLXSIFlexDataGridCell> *)cell triggerEvent:(FLXSEvent *)triggerEvent;
-(void)beginEdit:(UIView<FLXSIFlexDataGridDataCell>*)cell;

- (void)initializeEditor:(UIView <FLXSIFlexDataGridDataCell> *)editCell editor:(UIView *)editor pare:(UIView *)pare;
-(void)refreshCells;
-(void)onStageResize:(FLXSEvent*)event;
-(void)doInvalidate;
-(void)invalidateDisplayList;
-(void)gotoHorizontalPosition:(float)hsp;

- (void)scrollToExistingRow:(float)vsp scrollDown:(BOOL)scrollDown;
-(BOOL)isOutOfVisibleArea:(FLXSRowInfo*)row;

- (void)endEdit:(UIView *)editor event:(FLXSEvent *)event;
-(void)cancelEdit:(FLXSEvent*)event;
-(void)onEditorValueCommit:(FLXSEvent*)event;

- (BOOL)populateValue:(FLXSEvent *)event itemEditor:(UIView *)itemEditor;
-(void)invalidateCells;
-(NSMutableArray*)getAllRows;

- (void)highlightRow:(UIView <FLXSIFlexDataGridCell> *)cell row:(FLXSRowInfo *)row highLight:(BOOL)highLight highLightColor:(id)highLightColor;

- (UIView <FLXSIFlexDataGridCell> *)getCellInDirection:(UIView <FLXSIFlexDataGridCell> *)thisCell direction:(NSString *)direction dataOnly:(BOOL)dataOnly editableOnly:(BOOL)editableOnly scrollIfNecessary:(BOOL)scrollIfNecessary hoverableOnly:(BOOL)hoverableOnly;

- (UIView <FLXSIFlexDataGridCell> *)checkRowSpanColSpan:(UIView <FLXSIFlexDataGridCell> *)retCell thisCell:(UIView <FLXSIFlexDataGridCell> *)thisCell direction:(NSString *)direction dataOnly:(BOOL)dataOnly editableOnly:(BOOL)editableOnly scrollIfNecessary:(BOOL)scrollIfNecessary hoverableOnly:(BOOL)hoverableOnly;
-(BOOL)isCoveredByRowSpanOrColspan:(UIView<FLXSIFlexDataGridCell>*)cell;
-(BOOL)isCoveredByRowSpan:(UIView<FLXSIFlexDataGridCell>*)cell;
-(BOOL)isCoveredByColSpan:(UIView<FLXSIFlexDataGridCell>*)cell;

- (UIView <FLXSIFlexDataGridCell> *)getCellForRowColumn:(NSObject *)dataObject column:(FLXSFlexDataGridColumn *)col includeExp:(BOOL)includeExp;
-(void)removeEventListeners:(FLXSComponentInfo*)comp;

- (FLXSRowInfo *)addRow:(float)ht scrollDown:(BOOL)scrollDown rowPositionInfo:(FLXSRowPositionInfo *)rowPositionInfo;

- (FLXSComponentAdditionResult *)addCell:(UIView *)component row:(FLXSRowInfo *)row existingComponent:(FLXSComponentInfo *)existingComponent;

- (FLXSComponentInfo *)addToSection:(UIView <FLXSIFlexDataGridCell> *)cell row:(FLXSRowInfo *)row lockDir:(NSString *)lockDir existingComponent:(FLXSComponentInfo *)existingComponent;

- (FLXSItemLoadInfo *)findLoadingInfo:(NSObject *)item level:(FLXSFlexDataGridColumnLevel *)level useSelectedKeyField:(BOOL)useSelectedKeyField;

- (BOOL)processRendererLevel:(FLXSRowPositionInfo *)rowPositionInfo scrollDown:(BOOL)scrollDown;
-(void)placeComponents;

- (BOOL)processHeaderLevel:(FLXSFlexDataGridColumnLevel *)level rowPositionInfo:(FLXSRowPositionInfo *)rowPositionInfo scrollDown:(BOOL)scrollDown item:(NSObject *)item chromeLevel:(int)chromeLevel existingRow:(FLXSRowInfo *)existingRow existingComponents:(NSArray *)existingComponents;
-(NSString*)traceRows;
-(NSString*)traceCells;
-(float)getPagerWidth;

- (void)processFilterCell:(FLXSFlexDataGridColumnLevel *)level columns:(NSArray *)cols colIndex:(int)colIndex row:(FLXSRowInfo *)row item:(NSObject *)item flatDp:(NSObject *)flatDp existingComponents:(NSArray *)existingComponents;

- (void)initializeFilterRenderer:(UIView <FLXSIFilterControl> *)filterRenderer filterColumn:(FLXSFlexDataGridColumn *)filterColumn item:(NSObject *)item flatDp:(NSObject *)flatDp level:(FLXSFlexDataGridColumnLevel *)level;

- (void)buildFilter:(UIView<FLXSISelectFilterControl>  *)iSelectFilterControl column:(FLXSFlexDataGridColumn *)column parentObject:(NSObject *)parentObject flatValues:(NSObject *)flatValues;

- (void)processFooterCell:(FLXSFlexDataGridColumnLevel *)level columns:(NSArray *)cols colIndex:(int)colIndex row:(FLXSRowInfo *)row item:(NSObject *)item existingComponents:(NSArray *)existingComponents;

- (FLXSFlexDataGridColumnGroupCell *)processColumnGroupCell:(FLXSFlexDataGridColumnLevel *)level rendererFactory:(FLXSClassFactory *)rendererFactory row:(FLXSRowInfo *)row item:(NSObject *)item rowHeight:(float)rowHeight columnGroup:(FLXSFlexDataGridColumnGroup *)columnGroup existingComponents:(NSArray *)existingComponents;

- (void)processHeaderCell:(FLXSFlexDataGridColumnLevel *)level columns:(NSArray *)cols colIndex:(int)colIndex row:(FLXSRowInfo *)row item:(NSObject *)item rowHeight:(float)rowHeight existingComponents:(NSArray *)existingComponents;

- (FLXSComponentInfo *)getExistingCell:(NSMutableArray *)existingComponents rendererFactory:(FLXSClassFactory *)rendererFactory col:(FLXSFlexDataGridColumn *)col;
-(void)onFilterChange:(NSNotification*)ns;
-(void)onPageChange:(NSNotification*)event;
-(void)rootPageChange:(NSNotification*)event;
-(void)dispatchPageChange:(FLXSEvent*)event;

- (FLXSAdvancedFilter *)createFilter:(FLXSFlexDataGridColumnLevel *)level parentObject:(NSObject *)parentObject;
-(void)killResize;
-(UIView<FLXSIFlexDataGridCell>*)getCurrentEditCell;
-(UIView*)getCurrentEditor;
-(UIView<FLXSIFlexDataGridDataCell>*)editCell;
-(void)editCell:(UIView<FLXSIFlexDataGridDataCell>*)val;
-(UIView*)editor;
-(void)editor:(UIView*)val;
-(void)columnResizeMouseUpHandler:(FLXSEvent*)event;
-(void)snapToColumnWidths;
-(int)getColSpan:(UIView<FLXSIFlexDataGridCell>*)cell;
-(int)getRowSpan:(UIView<FLXSIFlexDataGridCell>*)cell;
-(float)getCellWidth:(UIView<FLXSIFlexDataGridCell>*)cell;
-(float)getCellHeight:(UIView<FLXSIFlexDataGridCell>*)cell;
-(void)hideSpannedCells;
-(NSObject*)getRowsForSnapping;
-(void)snapRowToColumnWidth:(FLXSRowInfo*)row;
-(void)placeSortIcon:(FLXSEvent*)event;
-(void)selectAllChangedHandler:(FLXSEvent*)event;
-(void)onSelectAllChanged:(FLXSEvent*)event;

- (void)sortByColumn:(FLXSFlexDataGridColumn *)col direction:(NSString *)direction;

- (void)onHeaderCellClicked:(FLXSFlexDataGridHeaderCell *)cell triggerEvent:(FLXSEvent *)triggerEvent isMsc:(BOOL)isMsc useMsc:(BOOL)useMsc direction:(NSString *)direction;

- (void)storeSort:(NSObject *)item column:(FLXSFlexDataGridColumn *)column ascending:(BOOL)ascending;
-(void)sortByCell:(FLXSFlexDataGridHeaderCell*)cell;

- (NSMutableArray *)filterPageSort:(NSArray *)flat level:(FLXSFlexDataGridColumnLevel *)level parentObj:(NSObject *)parentObj applyFilter:(BOOL)applyFilter applyPaging:(BOOL)applyPaging applySort:(BOOL)applySort pages:(NSArray *)pages updatePager:(BOOL)updatePager;

- (FLXSFlexDataGridPaddingCell *)addPadding:(int)nestLevel row:(FLXSRowInfo *)row paddingHeight:(float)paddingHeight level:(FLXSFlexDataGridColumnLevel *)level forceRightLock:(BOOL)forceRightLock scrollPad:(BOOL)scrollPad width:(float)width;

- (void)updateDisplayList:(float)unscaledWidth unscaledHeight:(float)unscaledHeight;
-(void)getChildIds:(NSArray*)arr;
-(NSArray*)getSelectedIds:(int)bodyStart;
-(int)getChildId:(NSArray*)arr :(UIView<FLXSIFlexDataGridCell>*)cell;

- (UIView <FLXSIFlexDataGridCell> *)getChildAtId:(NSMutableArray *)arr id:(int)id;
-(void)refreshCheckBoxes;

+ (void)initializeRendererFromColumn:(UIView <FLXSIFilterControl> *)filterRenderer filterColumn:(FLXSFlexDataGridColumn *)filterColumn;

+ (FLXSClassFactory*) levelRendererFactory;
+ (FLXSClassFactory*) labelFieldFactory;


//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListener:(NSString *)type target:(NSObject *)target handler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods

@end
