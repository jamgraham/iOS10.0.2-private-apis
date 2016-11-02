/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKBloodTypeObject : NSObject <NSCopying, NSSecureCoding> {
    long long  _bloodType;
}

@property (readonly) long long bloodType;

+ (bool)supportsSecureCoding;

- (id)_initWithBloodType:(long long)arg1;
- (long long)bloodType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
