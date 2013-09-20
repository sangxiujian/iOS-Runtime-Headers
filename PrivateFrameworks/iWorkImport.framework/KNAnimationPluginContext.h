/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimatedBuild, NSArray, NSDictionary;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext> {
    KNAnimatedBuild *_animatedBuild;
    unsigned int _direction;
    double _duration;
    NSArray *_magicMoveMatches;
    double _percent;
    int _rendererType;
    NSArray *_textures;
    NSDictionary *_transitionAttributes;
}

@property KNAnimatedBuild * animatedBuild;
@property unsigned int direction;
@property double duration;
@property(readonly) BOOL isBuild;
@property(readonly) BOOL isFrameRenderer;
@property(readonly) BOOL isMagicMove;
@property(readonly) BOOL isTransition;
@property NSArray * magicMoveMatches;
@property double percent;
@property int rendererType;
@property NSArray * textures;
@property NSDictionary * transitionAttributes;

- (id)animatedBuild;
- (id)description;
- (unsigned int)direction;
- (double)duration;
- (BOOL)isBuild;
- (BOOL)isFrameRenderer;
- (BOOL)isMagicMove;
- (BOOL)isTransition;
- (id)magicMoveMatches;
- (double)percent;
- (int)rendererType;
- (void)setAnimatedBuild:(id)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setMagicMoveMatches:(id)arg1;
- (void)setPercent:(double)arg1;
- (void)setRendererType:(int)arg1;
- (void)setTextures:(id)arg1;
- (void)setTransitionAttributes:(id)arg1;
- (id)textures;
- (id)transitionAttributes;

@end