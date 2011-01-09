/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMMouseEvent : DOMUIEvent 
{
}

@property(readonly) NSInteger screenX;
@property(readonly) NSInteger screenY;
@property(readonly) NSInteger clientX;
@property(readonly) NSInteger clientY;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;
@property(readonly) unsigned short button;
@property(retain,readonly) <DOMEventTarget> *relatedTarget;


- (NSInteger)screenX;
- (NSInteger)screenY;
- (NSInteger)clientX;
- (NSInteger)clientY;
- (BOOL)ctrlKey;
- (BOOL)shiftKey;
- (BOOL)altKey;
- (BOOL)metaKey;
- (unsigned short)button;
- (id)relatedTarget;
- (NSInteger)offsetX;
- (NSInteger)offsetY;
- (NSInteger)x;
- (NSInteger)y;
- (id)fromElement;
- (id)toElement;
- (void)initMouseEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(NSInteger)arg5 screenX:(NSInteger)arg6 screenY:(NSInteger)arg7 clientX:(NSInteger)arg8 clientY:(NSInteger)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
- (void)initMouseEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15;

@end