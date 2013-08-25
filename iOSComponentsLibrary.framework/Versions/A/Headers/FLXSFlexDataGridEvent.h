#import "FLXSVersion.h"
#import "FLXSEvent.h"

@class FLXSFlexDataGrid;
@class FLXSFlexDataGridColumnLevel;
@protocol FLXSIFlexDataGridCell;
@class FLXSFlexDataGridColumn;

@interface FLXSFlexDataGridEvent : FLXSEvent
{

}

@property (nonatomic, strong) FLXSFlexDataGridColumn* column;
@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic, strong) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) UIView <FLXSIFlexDataGridCell>* cell;
@property (nonatomic, strong) NSObject* item;
@property (nonatomic, assign) BOOL isItemSelected;
@property (nonatomic, strong) FLXSEvent* triggerEvent;

- (id)initWithType:(NSString *)type andGrid:(FLXSFlexDataGrid *)grid andLevel:(FLXSFlexDataGridColumnLevel *)level andColumn:(FLXSFlexDataGridColumn *)column andCell:(UIView <FLXSIFlexDataGridCell> *)cell andItem:(NSObject *)item andTriggerEvent:(FLXSEvent *)triggerEvent andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;
-(FLXSEvent*)clone;

+ (NSString*)CHANGE;
+ (NSString*)CREATION_COMPLETE;

+ (NSString*)AUTO_REFRESH;
+ (NSString*)DATA_PROVIDER_CHANGE;
+ (NSString*)COLUMNS_RESIZED;
+ (NSString*)COLUMN_STRETCH;

+ (NSString*)COLUMNS_SHIFT;
+ (NSString*)COMPONENTS_CREATED;
+ (NSString*)COLUMN_RESIZED;
+ (NSString*)COLUMN_X_CHANGED;
+ (NSString*)HEADER_CLICKED;
+ (NSString*)SELECT_ALL_CHECKBOX_CHANGED;
+ (NSString*)ITEM_OPEN;
+ (NSString*)ITEM_OPENING;
+ (NSString*)ITEM_CLOSE;
+ (NSString*)ITEM_CLOSING;
+ (NSString*)ITEM_EDIT_CANCEL;
+ (NSString*)ITEM_EDIT_VALUE_COMMIT;
+ (NSString*)ITEM_EDIT_END;
+ (NSString*)ITEM_EDIT_BEGINNING;
+ (NSString*)ITEM_EDIT_BEGIN;
+ (NSString*)ITEM_EDITOR_CREATED;
+ (NSString*)ITEM_FOCUS_IN;
+ (NSString*)ITEM_ROLL_OVER;
+ (NSString*)ITEM_ROLL_OUT;
+ (NSString*)ITEM_CLICK;
+ (NSString*)ITEM_RIGHT_CLICK;
+ (NSString*)ITEM_DOUBLE_CLICK;
+ (NSString*)DYNAMIC_LEVEL_CREATED;
+ (NSString*)DYNAMIC_ALL_LEVELS_CREATED;
+ (NSString*)ICON_MOUSE_OVER;
+ (NSString*)ICON_CLICK;
+ (NSString*)ICON_MOUSE_OUT;
+ (NSString*)PREBUILT_FILTER_RUN;
+ (NSString*)RENDERER_INITIALIZED;
+ (NSString*)CELL_RENDERED;
+ (NSString*)CELL_CREATED;
+ (NSString*)PLACING_SECTIONS;
+ (NSString*)SCROLL;
@end

