#import "FLXSVersion.h"
@class FLXSClassFactory;
@protocol FLXSIPDFPrinter;

@protocol FLXSIPrintable
-(NSObject*)parentDocument;
-(BOOL)enablePrint;
-(void)enablePrint:(BOOL)enabled;
-(FLXSClassFactory*)createPrintComponentFactory;
-(NSObject <FLXSIPDFPrinter>*)pdfPrinter;
-(void)pdfPrinter:(NSObject <FLXSIPDFPrinter>*)val;
@end

