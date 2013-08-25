#import "FLXSVersion.h"
#import "FLXSEvent.h"

@class FLXSFlexDataGrid;
@class FLXSPrintFlexDataGrid;

@interface FLXSFlexDataGridPrintEvent : FLXSEvent
{
}

@property (nonatomic, strong) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) FLXSPrintFlexDataGrid* printGrid;

- (id)initWithType:(NSString *)type andGrid:(FLXSFlexDataGrid *)grid andPrintGrid:(FLXSPrintFlexDataGrid *)printGrid andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;

+ (NSString*)BEFORE_PRINT;
+ (NSString*)BEFORE_PRINT_PROVIDER_SET;
+ (NSString*)AFTER_PRINT;
@end

