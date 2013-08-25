#import "FLXSVersion.h"
#import "FLXSEvent.h"

@class FLXSFlexDataGrid;

@interface FLXSFlexDataGridVirtualScrollEvent : FLXSEvent
{
}

@property (nonatomic, strong) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) NSArray* recordsToLoad;

- (id)initWithType:(NSString *)type andGrid:(FLXSFlexDataGrid *)grid andRecordsToLoad:(NSArray *)recordsToLoad andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;

+ (NSString*)VIRTUAL_SCROLL;
@end

