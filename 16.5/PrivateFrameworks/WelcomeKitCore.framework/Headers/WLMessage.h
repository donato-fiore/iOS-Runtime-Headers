// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLMESSAGE_H
#define WLMESSAGE_H

@class NSMutableArray, NSArray, NSDate, NSString, NSData;

#import <Foundation/Foundation.h>

#import "WLSourceDeviceRecordSummary.h"
#import "WLMessageSMILContext.h"
#import "WLMessageParty.h"

@interface WLMessage : NSObject {
    WLSourceDeviceRecordSummary *_summary;
    WLMessageSMILContext *_smilContext;
    NSMutableArray *_mimeParts;
}


@property (readonly, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *dateString; // ivar: _dateString
@property (nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (nonatomic) NSUInteger messageDirection; // ivar: _messageDirection
@property (readonly, nonatomic) NSString *messageText; // ivar: _messageText
@property (readonly, nonatomic) NSUInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSData *mimeData; // ivar: _mimeData
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) WLMessageParty *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *subject; // ivar: _subject
@property (readonly, nonatomic) NSString *threadID; // ivar: _threadID


+(BOOL)_shouldIgnoreMessageThreadID;
+(id)_fileNameForPart:(id)arg0 smilContext:(id)arg1 ;
+(id)dateFromMimeHeaders:(id)arg0 ;
+(id)mimeHeadersFromMimeData:(id)arg0 sqlController:(id)arg1 ;
+(id)recipientsFromMimeHeaders:(id)arg0 ;
+(id)senderFromMimeHeaders:(id)arg0 ;
+(struct _NSRange )_populateMimeHeaders:(id)arg0 recipients:(id)arg1 fromRange:(struct _NSRange )arg2 ofString:(id)arg3 addCountryCodeToParties:(BOOL)arg4 sqlController:(id)arg5 ;
+(void)addRecipients:(id)arg0 toMimeHeaders:(id)arg1 ;
-(id)summary;
-(void)parseMIMEData:(id)arg0 sqlController:(id)arg1 ;
-(void)progressiveMimeParser:(id)arg0 beganDataForMimePart:(id)arg1 ;
-(void)progressiveMimeParser:(id)arg0 beganMimePart:(id)arg1 ;
-(void)progressiveMimeParser:(id)arg0 failedWithError:(id)arg1 ;
-(void)progressiveMimeParser:(id)arg0 finishedMimePart:(id)arg1 ;
-(void)setSummary:(id)arg0 ;


@end


#endif