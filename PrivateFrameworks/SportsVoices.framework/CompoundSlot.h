/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotSequence;



@interface CompoundSlot : Slot 
{
    SlotSequence *slots;
}

@property(readonly) SlotSequence *slots;


- (BOOL)matches:(id)arg1;
- (id)reversed;
- (id)slots;
- (id)initFromPlist:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)description;
- (void)dealloc;

@end