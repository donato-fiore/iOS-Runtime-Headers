// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTMEDIAPROPERTYPREDICATE_H
#define SUSCRIPTMEDIAPROPERTYPREDICATE_H

@class NSString, MPMediaPropertyPredicate;


#import "SUScriptObject.h"

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString *_comparisonType;
    NSString *_property;
    id *_value;
}


@property (readonly) NSString *comparisonType;
@property (readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;
@property (readonly) NSString *property;
@property (readonly) id *value;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_playlistAttributesForScriptArray:(id)arg0 ;
-(id)attributeKeys;
-(id)initWithProperty:(id)arg0 value:(id)arg1 comparisonType:(id)arg2 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif