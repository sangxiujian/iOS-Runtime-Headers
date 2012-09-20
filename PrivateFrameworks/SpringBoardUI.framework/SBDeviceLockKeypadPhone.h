/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad  {
    UIButton *_emergencyCallButton;
    UIButton *_poundButton;
    UIImage *_deleteIcon;
}

+ (id)pressedImage;
+ (id)keypadImage;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_yFudge;
- (void)_updateCancelAndDeleteButtons;
- (void)setDeleteEnabled:(BOOL)arg1;
- (BOOL)emergencyKeyChar;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;

@end