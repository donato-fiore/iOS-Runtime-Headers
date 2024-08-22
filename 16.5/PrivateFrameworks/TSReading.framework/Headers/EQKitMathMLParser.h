// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLPARSER_H
#define EQKITMATHMLPARSER_H

@class NSData, NSError;

#import <Foundation/Foundation.h>

#import "EQKitEnvironmentInstance.h"

@interface EQKitMathMLParser : NSObject {
    ? mRootNode;
    EQKitEnvironmentInstance *mEnvironment;
    NSData *mSource;
    stack<EQKitMathMLParserState, std::deque<EQKitMathMLParserState>> mState;
    *void mAttributeCollection;
}


@property (nonatomic) *void attributeCollection;
@property (readonly, nonatomic) NSError *error; // ivar: mError
@property (readonly, nonatomic) *_xmlNs ns; // ivar: mNS


-(?)initWithDocument:(?)arg0 node:(?)arg1 sourceenvironment;
-(?)parseAttributesForNodewithXMLNode;
-(?)parseChildrenAsArrayFromXMLNode;
-(?)parseChildrenAsNodeFromXMLNode;
-(?)parseChildrenAsTokenContentFromXMLNode;
-(?)parseNode;
-(?)reportErrorwithNode;
-(BOOL)isElement:(int)arg0 allowedInState:(int)arg1 ;
-(id)environment;
-(id)init;
-(id)parse;
-(int)state;
-(void)dealloc;
-(void)popState;
-(void)pushState:(int)arg0 ;


@end


#endif