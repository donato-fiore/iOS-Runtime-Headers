// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPOPAQUEFONTID_H
#define TSWPOPAQUEFONTID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPOpaqueFontID : NSObject

@property (retain, nonatomic) NSString *desiredPostScriptName; // ivar: _desiredPostScriptName
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithFont:(id)arg0 ;
-(id)initWithPostScriptName:(id)arg0 familyName:(id)arg1 ;


@end


#endif