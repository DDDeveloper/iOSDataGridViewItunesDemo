#import "FLXSVersion.h"
#import "FLXSFlexDataGridEvent.h"

@interface FLXSFlexDataGridItemEditEvent : FLXSFlexDataGridEvent
{
}

@property (nonatomic, strong) UIView* itemEditor;
@property (nonatomic, strong) NSObject * changedValue;

- (id)initWithType:(NSString *)type andGrid:(FLXSFlexDataGrid *)grid andLevel:(FLXSFlexDataGridColumnLevel *)level andColumn:(FLXSFlexDataGridColumn *)column andCell:(UIView <FLXSIFlexDataGridCell> *)cell andItem:(NSObject *)item andTriggerEvent:(FLXSEvent *)triggerEvent andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;

@end

