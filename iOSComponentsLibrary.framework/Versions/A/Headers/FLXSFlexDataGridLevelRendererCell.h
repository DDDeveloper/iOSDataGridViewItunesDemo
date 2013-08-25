#import "FLXSVersion.h"
#import "FLXSFlexDataGridCell.h"

@interface FLXSFlexDataGridLevelRendererCell : FLXSFlexDataGridCell

-(id)getBackgroundColors;
-(id)getTextColors;
-(id)getRolloverColor;
-(void)refreshCell;
-(NSString*)prefix;
-(BOOL)drawTopBorder;
@end

