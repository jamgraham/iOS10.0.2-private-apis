/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _userInfo;
}

@property (setter=ak_setContext:, nonatomic, retain) AKAppleIDAuthenticationContext *ak_context;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSAttributedString *attributedContentText;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_matchingDictionaryRepresentation;
- (id)attachments;
- (id)attributedContentText;
- (id)attributedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributedContentText:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)extensionItemWithAppleIDAuthenticationContext:(id)arg1;

- (id)ak_context;
- (void)ak_setContext:(id)arg1;

@end
