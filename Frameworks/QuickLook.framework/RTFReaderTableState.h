/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, RTFTextTable;

@interface RTFReaderTableState : NSObject {
    NSInteger _currentColumn;
    NSInteger _currentDefinitionColumn;
    NSInteger _currentRow;
    NSMutableArray *_currentRowArray;
    BOOL _currentRowIsLast;
    RTFTextTable *_currentTable;
    NSMutableArray *_previousRowArray;
    RTFTextTable *_previousTable;
}

- (void)dealloc;

@end