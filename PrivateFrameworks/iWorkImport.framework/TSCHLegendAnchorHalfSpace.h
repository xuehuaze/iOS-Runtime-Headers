/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAnchorHalfSpace : NSObject {
    struct TSCHLegendAnchorLine { 
        struct CGPoint { 
            float x; 
            float y; 
        } normal; 
        float distance; 
    } mLine;
}

@property(readonly) struct TSCHLegendAnchorLine { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; } line;

+ (id)halfSpaceWithLine:(struct TSCHLegendAnchorLine { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;

- (id)description;
- (id)initWithLine:(struct TSCHLegendAnchorLine { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (struct TSCHLegendAnchorLine { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })line;

@end