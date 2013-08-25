#import "FLXSVersion.h"
#import "FLXSVirtualScrollLoadInfo.h"
@class FLXSFlexDataGridColumnLevel;
@class FLXSFlexDataGrid;

@interface FLXSRowPositionInfo : NSObject
{
}

@property (nonatomic, strong) NSObject* rowData;
@property (nonatomic, strong) NSString* string;
@property (nonatomic, strong) FLXSVirtualScrollLoadInfo* virtualScrollLoadInfo;
@property (nonatomic, assign) int rowIndex;
@property (nonatomic, assign) float verticalPosition;
@property (nonatomic, assign) float rowHeight;
@property (nonatomic, assign) int rowType;
@property (nonatomic, assign) int levelNestDepth;
@property (nonatomic, assign) int rowSpan;

@property (nonatomic, readonly) int verticalPositionPlusHeight;
@property (nonatomic, readonly) int rowNestLevel;
@property (nonatomic, readonly) BOOL isRendererRow;
@property (nonatomic, readonly) BOOL isDataRow;
@property (nonatomic, readonly) BOOL isHeaderRow;


- (id)initWithRowData:(NSObject *)rowData andRowIndex:(int)rowIndex andVerticalPosition:(float)verticalPosition andRowHeight:(float)rowHeight andLevel:(FLXSFlexDataGridColumnLevel *)level andRowType:(int)rowType;
-(FLXSFlexDataGridColumnLevel*)getLevel:(FLXSFlexDataGrid*)grid;


+ (int)ROW_TYPE_HEADER;
+ (int)ROW_TYPE_FOOTER;
+ (int)ROW_TYPE_PAGER;
+ (int)ROW_TYPE_FILTER;
+ (int)ROW_TYPE_DATA;
+ (int)ROW_TYPE_FILL;
+ (int)ROW_TYPE_RENDERER;
+ (int)ROW_TYPE_COLUMN_GROUP;
@end

