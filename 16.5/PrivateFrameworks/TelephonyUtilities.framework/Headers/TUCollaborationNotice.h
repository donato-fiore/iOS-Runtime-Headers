// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCOLLABORATIONNOTICE_H
#define TUCOLLABORATIONNOTICE_H

@class NSUUID, SWCollaborationHighlight, NSString;
@protocol TUConversationNoticeProtocol;

#import <Foundation/Foundation.h>


@interface TUCollaborationNotice : NSObject <TUConversationNoticeProtocol>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) SWCollaborationHighlight *collaboration; // ivar: _collaboration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sessionEventType; // ivar: _sessionEventType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollaborationNotice:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif