#import "FLXSVersion.h"
@class FLXSRowPositionInfo;
@protocol FLXSIExtendedDataGrid;
@class FLXSFlexDataGridColumn;
@class FLXSFlexDataGridColumnGroup;
@class FLXSComponentInfo;
@class FLXSFlexDataGrid;
@protocol FLXSIExpandCollapseComponent;
@class FLXSFilterContainerImpl;

#import "FLXSIFilterControl.h"

@interface FLXSRowInfo : NSObject <NSCopying>
{

}
@property (nonatomic, strong) FLXSFilterContainerImpl* filterContainerInterface;
@property (nonatomic, assign) float height;
@property (nonatomic, assign) float y;
@property (nonatomic, strong) FLXSFlexDataGrid* dataGrid;
@property (nonatomic, strong) NSMutableArray* cells;
@property (nonatomic, strong) FLXSRowPositionInfo* rowPositionInfo;
@property (nonatomic, assign) BOOL hasScrollBarPad;
@property (nonatomic, assign) BOOL hasNestPad;
@property (nonatomic, assign) BOOL hasRightLockPad;
@property (nonatomic, assign) BOOL hasDisclosure;

- (id)initWithHeight:(float)height andY:(float)y andGrid:(FLXSFlexDataGrid *)grid;
-(NSObject*)data;
-(NSString*)name;
-(BOOL)isSimilarTo:(FLXSRowInfo*)other;

@property (nonatomic, readonly) BOOL isHeaderRow;
@property (nonatomic, readonly) BOOL isColumnGroupRow;
@property (nonatomic, readonly) BOOL isFooterRow;
@property (nonatomic, readonly) BOOL isPagerRow;
@property (nonatomic, readonly) BOOL isFilterRow;
@property (nonatomic, readonly) BOOL isRendererRow;
@property (nonatomic, readonly) BOOL isFillRow;
@property (nonatomic, readonly) BOOL isDataRow;
@property (nonatomic, readonly) BOOL isChromeRow;
@property (nonatomic, readonly) BOOL isColumnBased;

-(BOOL)paddingExists;
-(BOOL)scrollBarPadExists;
-(BOOL)disclosureExists;
-(BOOL)rightLockedExists;
-(NSArray*)getInnerCells;
-(BOOL)columnCellExists:(FLXSFlexDataGridColumn*)col;
-(BOOL)columnGroupCellExists:(FLXSFlexDataGridColumnGroup*)col;
-(FLXSComponentInfo*)getCellForColumnGroup:(FLXSFlexDataGridColumnGroup*)col;
-(UIView<FLXSIExpandCollapseComponent>*)getExpandCollapseCell;
-(FLXSComponentInfo*)getCellForColumn:(FLXSFlexDataGridColumn*)col;
-(NSArray*)getLockedCells;
-(FLXSComponentInfo*)addCell:(UIView*)component :(float)x;
-(void)removeCell:(FLXSComponentInfo*)comp;

- (void)setFLXSRowPositionInfo:(FLXSRowPositionInfo *)rowPos setHt:(BOOL)setHt;
-(void)showHide:(BOOL)showHide;
-(void)invalidateCells;
-(void)refreshCells;
-(int)getColumnGroupDepth:(FLXSFlexDataGrid*)grid;
-(float)getMaxCellHeight:(FLXSFlexDataGridColumn*)col;


-(void)registerIFilterControl:(UIView<FLXSIFilterControl>*)iFilterControl;
-(void)unRegisterIFilterControl:(UIView<FLXSIFilterControl>*)iFilterControl;
-(NSArray*)getFilterArguments;
-(NSArray*)getFilterControls;
-(void)processFilter;
-(void)clearFilter:(NSString*)col;

- (void)setFilterValue:(NSString *)column value:(NSObject *)value;
-(BOOL)setFilterFocus:(NSString*)fld;
-(NSObject*)getFilterValue:(NSString*)column;
-(BOOL)hasField:(NSString*)column;

//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListener:(NSString *)type target:(NSObject *)target handler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods


@end

