// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPHNANORESPONDWITHTEXTSTORE_H
#define NPHNANORESPONDWITHTEXTSTORE_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface NPHNanoRespondWithTextStore : NSObject {
    NSUserDefaults *_userDefaults;
}




-(NSUInteger)count;
-(id)cannedRepliesForLanguage:(id)arg0 ;
-(id)customReplies;
-(id)defaultRepliesForLanguage:(id)arg0 ;
-(id)init;


@end


#endif