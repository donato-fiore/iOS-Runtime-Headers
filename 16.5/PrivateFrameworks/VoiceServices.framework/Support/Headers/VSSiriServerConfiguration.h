// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSIRISERVERCONFIGURATION_H
#define VSSIRISERVERCONFIGURATION_H

@class NSArray, CKKnowledgeStore;

#import <Foundation/Foundation.h>


@interface VSSiriServerConfiguration : NSObject

@property (readonly, nonatomic) NSArray *allowedAppID;
@property (retain, nonatomic) CKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) BOOL shouldDelayVoiceUpdate;


+(id)defaultConfig;
-(CGFloat)deviceWaitTimeForAppId:(id)arg0 ;
-(CGFloat)timeoutForAppId:(id)arg0 ;
-(id)configForAppId:(id)arg0 key:(id)arg1 ;
-(id)dictForKey:(id)arg0 ;
-(id)experimentIdentifier;
-(id)init;


@end


#endif