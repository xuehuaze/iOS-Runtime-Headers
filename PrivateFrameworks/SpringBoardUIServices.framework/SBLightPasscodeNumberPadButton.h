/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (float)_numberPadButtonOuterCircleDiameter;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingOutsideRing;

- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;

@end
