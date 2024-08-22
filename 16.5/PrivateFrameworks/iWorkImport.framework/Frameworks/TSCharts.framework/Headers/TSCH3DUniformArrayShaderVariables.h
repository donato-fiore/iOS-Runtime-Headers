// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DUNIFORMARRAYSHADERVARIABLES_H
#define TSCH3DUNIFORMARRAYSHADERVARIABLES_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSCH3DUniformArrayShaderVariables : NSObject {
    NSString *_prefix;
    NSMutableDictionary *_variables;
}


@property (readonly, nonatomic) NSUInteger arraySize; // ivar: _arraySize


+(id)variablesWithPrefix:(id)arg0 arraySize:(NSUInteger)arg1 ;
-(id)initWithPrefix:(id)arg0 arraySize:(NSUInteger)arg1 ;
-(id)p_formatVariableName:(id)arg0 ;
-(id)variableAtIndex:(NSUInteger)arg0 name:(id)arg1 ;
-(id)variableForName:(id)arg0 ;
-(void)addArrayName:(id)arg0 type:(id)arg1 ;
-(void)addUniformsToShaderProgram:(id)arg0 size:(NSUInteger)arg1 ;
-(void)setVariable:(id)arg0 forName:(id)arg1 ;


@end


#endif