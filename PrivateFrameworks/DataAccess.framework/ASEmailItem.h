/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDate, NSString, NSArray, ASMeetingRequest;



@interface ASEmailItem : ASChangedCollectionLeaf 
{
    NSString *_to;
    NSString *_cc;
    NSString *_from;
    NSString *_replyTo;
    NSDate *_date;
    NSString *_subject;
    NSString *_displayTo;
    NSInteger _importance;
    BOOL _read;
    NSString *_body;
    NSInteger _bodySize;
    BOOL _bodyTruncated;
    NSString *_messageClass;
    NSArray *_attachments;
    ASMeetingRequest *_meetingRequest;
    NSString *_threadTopic;
    NSString *_mimeData;
    NSString *_folderId;
}


- (id)initWithServerID:(id)arg1 from:(id)arg2 to:(id)arg3 body:(id)arg4 subject:(id)arg5 date:(id)arg6 isRead:(BOOL)arg7;
- (id)asParseRules;
- (void)_processApplicationData:(BOOL)arg1;
- (void)processAppDataForStream;
- (void)postProcessApplicationData;
- (BOOL)_isSyncingCalendars;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (id)description;
- (NSInteger)compare:(id)arg1;
- (void)dealloc;
- (id)meetingRequestUUID;
- (id)meetingRequestMetaData;
- (id)to;
- (void)setTo:(id)arg1;
- (id)cc;
- (void)setCc:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (id)replyTo;
- (void)setReplyTo:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)displayTo;
- (void)setDisplayTo:(id)arg1;
- (NSInteger)importance;
- (void)setImportance:(NSInteger)arg1;
- (BOOL)read;
- (void)setRead:(BOOL)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (NSInteger)bodySize;
- (void)setBodySize:(NSInteger)arg1;
- (NSInteger)bodyTruncated;
- (void)setBodyTruncated:(NSInteger)arg1;
- (id)messageClass;
- (void)setMessageClass:(id)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (void)_setMeetingRequest:(id)arg1;
- (id)threadTopic;
- (void)setThreadTopic:(id)arg1;
- (void)setMimeData:(id)arg1;
- (id)mimeData;
- (id)folderId;
- (void)setFolderId:(id)arg1;

@end