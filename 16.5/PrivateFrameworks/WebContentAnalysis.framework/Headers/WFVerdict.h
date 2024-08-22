// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVERDICT_H
#define WFVERDICT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFLSMResult.h"

@interface WFVerdict : NSObject {
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}




+(id)verdictWithRestriction:(BOOL)arg0 URL:(id)arg1 evidence:(int)arg2 LSMEvaluationResult:(id)arg3 message:(id)arg4 ;
-(BOOL)restricted;
-(id)LSMEvaluationResult;
-(id)URL;
-(id)description;
-(id)message;
-(int)evidence;
-(void)dealloc;
-(void)setEvidence:(int)arg0 ;
-(void)setLSMEvaluationResult:(id)arg0 ;
-(void)setMessage:(id)arg0 ;
-(void)setRestricted:(BOOL)arg0 ;
-(void)setURL:(id)arg0 ;


@end


#endif