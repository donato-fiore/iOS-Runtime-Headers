// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPLINESPACING_H
#define TSWPLINESPACING_H

@protocol TSSPropertyValueArchiving, NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>



@property (readonly, nonatomic) CGFloat amount; // ivar: _amount
@property (readonly, nonatomic) CGFloat baselineRule; // ivar: _baselineRule
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
+(id)lineSpacing;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithLocalizationDictionary:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 amount:(CGFloat)arg1 ;
-(id)initWithMode:(NSInteger)arg0 amount:(CGFloat)arg1 baselineRule:(CGFloat)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif