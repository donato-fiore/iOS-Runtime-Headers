// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLASPECTSREGISTRATION_H
#define TMLASPECTSREGISTRATION_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TMLAspectsRegistration : NSObject {
    NSMapTable *_registeredAspects;
}




+(id)keyForClassNamed:(id)arg0 signalName:(id)arg1 advice:(int)arg2 ;
+(id)keyForProtocolNamed:(id)arg0 signalName:(id)arg1 advice:(int)arg2 ;
+(id)keysForObject:(id)arg0 withMetaObjects:(id)arg1 signalName:(id)arg2 advice:(int)arg3 ;
+(id)shared;
-(id)aspectsForObject:(id)arg0 signalName:(id)arg1 advice:(int)arg2 ;
-(id)aspectsWithKey:(id)arg0 ;
-(id)aspectsWithKeys:(id)arg0 ;
-(id)init;
-(id)storageForKey:(id)arg0 createIfMissing:(BOOL)arg1 ;
-(id)strongAspectsFromArray:(id)arg0 ;
-(void)registerAspect:(id)arg0 withKey:(id)arg1 ;
-(void)unregisterAspect:(id)arg0 withKey:(id)arg1 ;


@end


#endif