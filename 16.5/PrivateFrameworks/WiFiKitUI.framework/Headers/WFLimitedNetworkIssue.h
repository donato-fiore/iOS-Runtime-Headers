// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLIMITEDNETWORKISSUE_H
#define WFLIMITEDNETWORKISSUE_H

@class NSString;


#import "WFHealthIssue.h"

@interface WFLimitedNetworkIssue : WFHealthIssue {
    BOOL _subtitleOnlyIssue;
    NSString *_issueShortTitle;
    NSString *_typeString;
    NSString *_issueTitle;
    NSString *_issueRecommendation;
    NSString *_issueDescription;
}




+(id)limitedNetwork;
+(id)limitedNetwork_CH;
-(BOOL)subtitleOnlyIssue;
-(id)_RecommendationForChinaDevice:(BOOL)arg0 ;
-(id)initWithChinaDevice:(BOOL)arg0 ;
-(id)issueDescription;
-(id)issueRecommendation;
-(id)issueShortTitle;
-(id)issueTitle;
-(id)typeString;


@end


#endif