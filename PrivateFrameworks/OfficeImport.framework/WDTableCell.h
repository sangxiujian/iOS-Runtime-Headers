/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDTableRow, WDTableCellProperties;



@interface WDTableCell : NSObject 
{
    NSInteger mIndex;
    WDTableRow *mRow;
    WDTableCellProperties *mProperties;
    WDText *mText;
    BOOL mUseTrackedProperties;
}


- (id)initWithRow:(id)arg1 at:(NSInteger)arg2;
- (void)dealloc;
- (BOOL)useTrackedProperties;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (NSInteger)index;
- (id)row;
- (id)properties;
- (id)text;
- (double)cellWidth;

@end