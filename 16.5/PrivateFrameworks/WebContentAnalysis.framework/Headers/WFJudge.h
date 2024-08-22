// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFJUDGE_H
#define WFJUDGE_H


#import <Foundation/Foundation.h>

#import "WFLSMMap.h"
#import "WFSystemContentWhitelist.h"

@interface WFJudge : NSObject {
    WFLSMMap *map;
    WFSystemContentWhitelist *whitelist;
}




+(id)defaultJudge;
+(id)defaultLSMMapPath;
-(id)_pronounceOnWebpage:(id)arg0 ;
-(id)initWithMap:(id)arg0 ;
-(id)initWithMap:(id)arg0 systemContentWhitelist:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg0 pageURL:(id)arg1 debugPage:(*id)arg2 pageTitle:(*id)arg3 ;
-(id)pronounceOnPageContent:(id)arg0 pageURL:(id)arg1 whitelistUserPreferences:(id)arg2 debugPage:(*id)arg3 pageTitle:(*id)arg4 ;
-(id)pronounceOnWebpage:(id)arg0 ;
-(void)dealloc;


@end


#endif