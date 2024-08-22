// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONEFFICACYACCUMULATOR_H
#define _UITEXTINPUTSESSIONEFFICACYACCUMULATOR_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface _UITextInputSessionEfficacyAccumulator : NSObject {
    NSInteger _netCharacters;
    NSInteger _userRemovedCharacters;
    NSInteger _netEmojiCharacters;
    NSInteger _userRemovedEmojiCharacters;
    NSInteger _inputActions;
    NSMutableArray *_entries;
    NSString *_language;
    NSString *_region;
    NSString *_keyboardVariant;
    NSString *_keyboardLayout;
    NSString *_keyboardType;
    BOOL _sessionIsModeless;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)accumulatorWithName:(id)arg0 ;
+(id)getOrInitializeArrayFrom:(id)arg0 forKey:(NSUInteger)arg1 initCapacity:(NSUInteger)arg2 ;
+(id)getOrInitializeDictionaryFrom:(id)arg0 forKey:(NSUInteger)arg1 initCapacity:(NSInteger)arg2 ;
-(id)computeSessionModalitiesString;
-(id)init;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)enumerateTextInputActionsAnalytics:(id)arg0 ;
-(void)increaseCountForSource:(NSInteger)arg0 forActionType:(NSInteger)arg1 forFlagOptions:(NSInteger)arg2 forInputModeKey:(id)arg3 byAccumulatorEntry:(id)arg4 ;
-(void)increaseWithAction:(id)arg0 ;
-(void)reset;


@end


#endif