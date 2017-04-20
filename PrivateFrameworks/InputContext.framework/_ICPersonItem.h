/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPersonItem : _ICPredictedItem {
    NSString * _firstName;
    NSData * _imageData;
    BOOL  _isFirstPerson;
    NSString * _label;
    NSString * _lastName;
    NSString * _localizedFullName;
    NSString * _source;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) BOOL isFirstPerson;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *localizedFullName;
@property (nonatomic, readonly) NSString *source;

- (void).cxx_destruct;
- (id)firstName;
- (id)imageData;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 proactiveTrigger:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 localizedFullName:(id)arg6 label:(id)arg7 value:(id)arg8 source:(id)arg9 imageData:(id)arg10 isFirstPerson:(BOOL)arg11;
- (BOOL)isFirstPerson;
- (id)label;
- (id)lastName;
- (id)localizedFullName;
- (id)source;

@end