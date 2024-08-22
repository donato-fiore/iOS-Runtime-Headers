// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBCACHETOKEN_H
#define UIKBCACHETOKEN_H

@class NSMutableArray, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBCacheToken : NSObject <NSCopying>

 {
    NSMutableArray *_components;
}


@property (nonatomic) int displayHint;
@property (nonatomic) int emptyFields; // ivar: _emptyFields
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger renderFlags; // ivar: _renderFlags
@property (nonatomic) int rowHint;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size;
@property (readonly, nonatomic) NSString *string;
@property (nonatomic) ? styling;
@property (retain, nonatomic) NSSet *transformationIdentifiers; // ivar: _transformationIdentifiers


+(id)tokenForKey:(id)arg0 style:(struct ? )arg1 ;
+(id)tokenForKey:(id)arg0 style:(struct ? )arg1 displayInsets:(struct UIEdgeInsets )arg2 ;
+(id)tokenForKeyMask:(id)arg0 style:(struct ? )arg1 displayInsets:(struct UIEdgeInsets )arg2 ;
+(id)tokenForKeyplane:(id)arg0 ;
+(id)tokenTemplateFilledForKey:(id)arg0 style:(int)arg1 size:(struct CGSize )arg2 ;
+(id)tokenTemplateForKey:(id)arg0 name:(id)arg1 style:(int)arg2 size:(struct CGSize )arg3 ;
+(id)tokenTemplateForKey:(id)arg0 style:(int)arg1 size:(struct CGSize )arg2 ;
-(BOOL)isUsableForCacheToken:(id)arg0 withRenderFlags:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithComponents:(id)arg0 name:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)stringForComponentArray:(id)arg0 additionalValues:(id)arg1 ;
-(id)stringForConstruction:(id)arg0 ;
-(id)stringForKey:(id)arg0 state:(int)arg1 ;
-(id)stringForRenderFlags:(NSInteger)arg0 lightKeyboard:(BOOL)arg1 ;
-(id)stringForSplitState:(BOOL)arg0 handBias:(NSInteger)arg1 ;
-(id)stringForState:(int)arg0 ;
-(int)_writeArray:(id)arg0 toStr:(char *)arg1 maxLen:(int)arg2 ;
-(int)_writeEdgeInsets:(struct UIEdgeInsets )arg0 toStr:(char *)arg1 maxLen:(int)arg2 ;
-(int)_writeNumber:(float)arg0 toStr:(char *)arg1 ;
-(int)_writeString:(id)arg0 toStr:(char *)arg1 maxLen:(int)arg2 ;
-(void)annotateWithBool:(BOOL)arg0 ;
-(void)annotateWithInt:(int)arg0 ;
-(void)resetAnnotations;


@end


#endif