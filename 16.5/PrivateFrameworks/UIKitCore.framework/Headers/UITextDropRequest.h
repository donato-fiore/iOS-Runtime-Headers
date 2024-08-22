// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTDROPREQUEST_H
#define UITEXTDROPREQUEST_H

@class NSString;
@protocol UITextDropRequest_Private, UITextDropRequest, UIDropSession;

#import <Foundation/Foundation.h>

#import "UITextPosition.h"
#import "UITextRange.h"
#import "UITextDropProposal.h"

@interface UITextDropRequest : NSObject <UITextDropRequest_Private, UITextDropRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITextPosition *dropPosition; // ivar: _dropPosition
@property (readonly, nonatomic) UITextRange *dropRange; // ivar: _dropRange
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSameView) BOOL sameView; // ivar: _sameView
@property (retain, nonatomic) UITextDropProposal *suggestedProposal; // ivar: _suggestedProposal
@property (readonly) Class superclass;


-(id)initWithPosition:(id)arg0 range:(id)arg1 inSession:(id)arg2 ;


@end


#endif