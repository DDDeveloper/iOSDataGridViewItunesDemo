#import "FLXSVersion.h"
@protocol FLXSIFlexDataGridCell;
@class FLXSFlexDataGridColumnLevel;

@interface FLXSCellUtils : NSObject
+(void)drawBackground:(UIView<FLXSIFlexDataGridCell>*)cell;

+ (id)getRolloverColor:(UIView <FLXSIFlexDataGridCell> *)cell prop:(NSString *)prop;
+(id)getTextColors:(UIView<FLXSIFlexDataGridCell>*)cell;
+(id)getBackgroundColorFromGrid:(UIView<FLXSIFlexDataGridCell>*)cell;
+(id)getTextColorFromGrid:(UIView<FLXSIFlexDataGridCell>*)cell;
+(id)getBackgroundColors:(UIView<FLXSIFlexDataGridCell>*)cell;
+(void)drawBorders:(UIView<FLXSIFlexDataGridCell>*)cell;
+ (id)getStyleValue:(UIView <FLXSIFlexDataGridCell> *)cell styleProp:(NSString *)styleProp;
+(void)drawRightBorder:(UIView<FLXSIFlexDataGridCell>*)cell;
+(void)refreshCell:(UIView<FLXSIFlexDataGridCell>*)cell;
+ (void)setRendererSize:(UIView *)cellRenderer width:(float)w height:(float)h;
+ (NSString *)capitalizeFirstLetterIfPrefix:(NSString *)prefix val:(NSString *)val;
+(NSString*)doCap:(NSString*)val;
+ (void)initializeCheckBoxRenderer:(UIView <FLXSIFlexDataGridCell> *)cell level:(FLXSFlexDataGridColumnLevel *)level;
 @end

