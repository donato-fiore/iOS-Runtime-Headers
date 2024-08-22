// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIRELEASENOTE_H
#define SKUIRELEASENOTE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SKUIReleaseNote : NSObject

@property (readonly, nonatomic) NSString *changeNotes; // ivar: _changeNotes
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *versionString; // ivar: _versionString


-(id)initWithReleaseNoteDictionary:(id)arg0 dateFormatter:(id)arg1 ;


@end


#endif