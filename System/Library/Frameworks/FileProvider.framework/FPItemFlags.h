/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFileProviderItemFlags.h>

@class NSString;

@interface FPItemFlags : NSObject <NSCopying, NSSecureCoding, NSFileProviderItemFlags> {

	BOOL _userExecutable;
	BOOL _userReadable;
	BOOL _userWritable;
	BOOL _hidden;
	BOOL _pathExtensionHidden;

}

@property (assign,getter=isUserExecutable,nonatomic) BOOL userExecutable;                        //@synthesize userExecutable=_userExecutable - In the implementation block
@property (assign,getter=isUserReadable,nonatomic) BOOL userReadable;                            //@synthesize userReadable=_userReadable - In the implementation block
@property (assign,getter=isUserWritable,nonatomic) BOOL userWritable;                            //@synthesize userWritable=_userWritable - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                        //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isPathExtensionHidden,nonatomic) BOOL pathExtensionHidden;              //@synthesize pathExtensionHidden=_pathExtensionHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithItemFlags:(id)arg1 ;
-(void)setUserWritable:(BOOL)arg1 ;
-(void)setUserReadable:(BOOL)arg1 ;
-(void)setPathExtensionHidden:(BOOL)arg1 ;
-(BOOL)isPathExtensionHidden;
-(BOOL)isUserReadable;
-(BOOL)isUserWritable;
-(BOOL)isUserExecutable;
-(BOOL)isEqualToItemFlags:(id)arg1 ;
-(void)setUserExecutable:(BOOL)arg1 ;
@end

