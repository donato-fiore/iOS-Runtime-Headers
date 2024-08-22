// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBFILTEREVALUATOR_H
#define WEBFILTEREVALUATOR_H

@class NSURL, NSString, NSMutableData;
@protocol WFPINEntryViewControllerProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFRemotePINEntryViewController.h"

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding>

 {
    NSUInteger _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
    id *_completion;
}


@property (retain, nonatomic) WFRemotePINEntryViewController *remoteViewController; // ivar: _remoteViewController


+(BOOL)isManagedSession;
+(BOOL)supportsSecureCoding;
+(id)createWithResponse:(id)arg0 ;
+(id)sharedBloomFilter;
-(BOOL)wasBlocked;
-(id)addData:(id)arg0 ;
-(id)blockPageForPageWithTitle:(id)arg0 origURL:(id)arg1 ;
-(id)dataComplete;
-(id)debugPageForPageWithData:(id)arg0 forURL:(id)arg1 debugString:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;
-(int)filterState;
-(void)attemptUnblockWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)unblockWithCompletion:(id)arg0 ;
-(void)userDidCancel;
-(void)userEnteredCorrectPIN;


@end


#endif