/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL allowsPunchOut;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;

+ (id)handleIntent;
+ (id)handleIntentWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (BOOL)requiresResponse;
- (void)setAllowsPunchOut:(BOOL)arg1;
- (void)setIntent:(id)arg1;

@end
