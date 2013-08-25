#import "FLXSVersion.h"
#import "FLXSPrintOptions.h"

@class FLXSPrintOptions;

@protocol FLXSIPDFPrinter
-(void)beginDocument:(FLXSPrintOptions*)printOptions;

- (void)addPage:(UIView *)page printOptions:(FLXSPrintOptions *)printOptions;
-(void)endDocument:(FLXSPrintOptions*)printOptions;
@end

