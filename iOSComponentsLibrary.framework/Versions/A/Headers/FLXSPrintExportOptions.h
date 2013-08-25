#import "FLXSVersion.h"

@interface FLXSPrintExportOptions : NSObject
{

}

@property (nonatomic, strong) NSString* printExportOption;
@property (nonatomic, assign) int pageFrom;
@property (nonatomic, assign) int pageTo;
@property (nonatomic, strong) UIView* popupParent;
@property (nonatomic, assign) BOOL showColumnPicker;
@property (nonatomic, assign) BOOL showWarningMessage;
@property (nonatomic, assign) BOOL hideHiddenColumns;
@property (nonatomic, assign) BOOL excludeHiddenColumns;
@property (nonatomic, strong) NSString* saveFileMessage;


+ (NSString*)PRINT_EXPORT_CURRENT_PAGE;
+ (NSString*)PRINT_EXPORT_ALL_PAGES;
+ (NSString*)PRINT_EXPORT_SELECTED_PAGES;
+ (NSString*)PRINT_EXPORT_SELECTED_RECORDS;
@end

