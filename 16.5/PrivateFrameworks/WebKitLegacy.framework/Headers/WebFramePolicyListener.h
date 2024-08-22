// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBFRAMEPOLICYLISTENER_H
#define WEBFRAMEPOLICYLISTENER_H

@class NSString;
@protocol WebPolicyDecisionListener, WebFormSubmissionListener;

#import <Foundation/Foundation.h>


@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>

 {
    RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> _frame;
    ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> _identifier;
    Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>>)> _policyFunction;
    RetainPtr<NSURL> _appLinkURL;
    unsigned char _defaultPolicy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithFrame:(struct NakedPtr<WebCore::Frame> )arg0 identifier:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> )arg1 policyFunction:(*void)arg2 defaultPolicy:(unsigned char)arg3 ;
-(id)initWithFrame:(struct NakedPtr<WebCore::Frame> )arg0 identifier:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::LocalPolicyCheckIdentifierType>> )arg1 policyFunction:(*void)arg2 defaultPolicy:(unsigned char)arg3 appLinkURL:(id)arg4 ;
-(void)continue;
-(void)dealloc;
-(void)download;
-(void)ignore;
-(void)invalidate;
-(void)receivedPolicyDecision:(unsigned char)arg0 ;
-(void)use;


@end


#endif