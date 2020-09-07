/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUGLObjectPool;

@interface NUGLObject : NSObject {

	unsigned _identifier;
	NUGLObjectPool* _objectPool;

}

@property (nonatomic,readonly) BOOL exists; 
@property (assign,nonatomic) unsigned identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NUGLObjectPool * objectPool;              //@synthesize objectPool=_objectPool - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)delete;
-(BOOL)exists;
-(void)generate:(id)arg1 ;
-(void)ensure:(id)arg1 ;
-(void)resetGLObject;
-(NUGLObjectPool *)objectPool;
-(void)setObjectPool:(NUGLObjectPool *)arg1 ;
@end
