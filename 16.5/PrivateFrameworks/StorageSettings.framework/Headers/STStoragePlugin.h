// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTORAGEPLUGIN_H
#define STSTORAGEPLUGIN_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface STStoragePlugin : NSObject {
    NSArray *_tips;
    NSString *_identifier;
}


@property (retain) NSString *identifier;
@property (retain) NSArray *tips;


-(NSInteger)externDataSizeForApp:(id)arg0 ;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg0 ;
-(id)externDataSizeAppIdentifiers;
-(void)notifyUsageChanged;
-(void)reloadSpecifiersForApp:(id)arg0 ;
-(void)reloadTips;


@end


#endif