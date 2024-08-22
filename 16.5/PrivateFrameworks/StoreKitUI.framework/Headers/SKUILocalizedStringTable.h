// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILOCALIZEDSTRINGTABLE_H
#define SKUILOCALIZEDSTRINGTABLE_H

@class NSDictionary, NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface SKUILocalizedStringTable : NSObject {
    NSDictionary *_strings;
}


@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName


-(id)_legacyLanguageNameForLanguageCode:(id)arg0 ;
-(id)initWithBundle:(id)arg0 localeName:(id)arg1 tableName:(id)arg2 ;
-(id)localizedStringForKey:(id)arg0 ;


@end


#endif